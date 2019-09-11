# Using modm in your own projects

This repository contains a tested structure for using the modm library in your
own projects. You can use this as a reference repository for integrating in your
own project, or start your project directly on top of this repository.

An overview of the repository structure:

<dl>
<dt>ext/</dt>
<dd>
We recommend putting all external libraries here, to keep a clean separation of
the project and source code licenses. The latest quarterly modm release is placed
in `ext/modm` as a git submodule. <a href="/ext/README.md">[details]</a>
</dd>

<dt>project/</dt>
<dd>
Applications describing common use-cases for different levels of customization.
<a href="/project/README.md">[details]</a>
</dd>

<dt>lib/</dt>
<dd>
Shared code using code generation with lbuild. If you want to build a modular
library integrated into the modm build system, you can do so here.
<a href="/lib/README.md">[details]</a>
</dd>
</dl>



## Get the code

We recommend you to **[[USE THIS TEMPLATE]](https://github.com/modm-io/modm-template/generate)**
and then work directly on your own repository with a completely clean history:
```
git clone --recursive --jobs 8 https://github.com/{your-username}/{your-repository}.git
```

If you do not have a GitHub account, you can of course just clone this repository
normally, but you will have all of its history.
```
git clone --recursive --jobs 8 https://github.com/modm-io/modm-template.git
```

