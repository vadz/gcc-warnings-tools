ifeq ($(GCC_DIR),)
$(error GCC_DIR must be set)
endif

.PHONY: all
all: warnings.csv warnings.cpp warnings.json warnings.md
	./show-gcc-warnings --read-from=gcc-all --all \
	    --csv=warnings.csv \
	    --json=warnings.json \
	    --markdown=all-warnings.md \
	    $(GCC_DIR)
	./show-gcc-warnings --read-from=gcc \
	    --cpp=warnings.cpp \
	    --markdown=warnings.md \
	    $(GCC_DIR)

# This target must be triggered manually with GCC_VER set to the version
# to update the files with.
.PHONY: update
update:
	$(if $(GCC_VER),,$(error GCC_VER must be set))
	./show-gcc-warnings --only-version=$(GCC_VER) --dump-all-to=gcc-all --all $(GCC_DIR)
	./show-gcc-warnings --only-version=$(GCC_VER) --dump-all-to=gcc $(GCC_DIR)
