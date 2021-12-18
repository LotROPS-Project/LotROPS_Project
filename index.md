## Welcome to the Lord of the Rings Open Source Project!

 **_!!Everything here is a work in progress!!_**

<!--- You can use the [editor on GitHub](https://github.com/Oiyeoi/LotROPS_Project/edit/gh-pages/index.md) to maintain and preview the content for your website in Markdown files.

Whenever you commit to this repository, GitHub Pages will run [Jekyll](https://jekyllrb.com/) to rebuild the pages in your site, from the content in your Markdown files.

### Markdown

Markdown is a lightweight and easy-to-use syntax for styling your writing. It includes conventions for

```markdown
Syntax highlighted code block

# Header 1
## Header 2
### Header 3

- Bulleted
- List

1. Numbered
2. List

**Bold** and _Italic_ and `Code` text

[Link](url) and ![Image](src)
```

For more details see [GitHub Flavored Markdown](https://guides.github.com/features/mastering-markdown/).

### Jekyll Themes

Your Pages site will use the layout and styles from the Jekyll theme you have selected in your [repository settings](https://github.com/Oiyeoi/LotROPS_Project/settings/pages). The name of this theme is saved in the Jekyll `_config.yml` configuration file.

### Support or Contact

Having trouble with Pages? Check out our [documentation](https://docs.github.com/categories/github-pages-basics/) or [contact support](https://support.github.com/contact) and we’ll help you sort it out. -->

---
layout: page
slug: home
---
<ol id="article-{{ page.slug }}_preview">{% for screenshot in site.screenshots limit:9 %}{% if screenshot.promoted %}
	<li data-state="inert">
		<a href="{{ screenshot.url | relative_url }}" title="{{ screenshot.title }}">
			<figure id="article-{{ page.slug }}_preview_{{ screenshot.slug }}" data-action="state.shift.up" data-state="none">
				<header>
					<hgroup>
						<h1>{{ screenshot.title }}</h1>
					</hgroup>
				</header>
				<div class="wrapper">
					<main>
						<img src="{{ screenshot.src | relative_url }}" alt="{{ screenshot.alt }}"/>
					</main>
				</div>
			</figure>
		</a>
	</li>{% endif %}
{% endfor %}
</ol>
{% for post in site.posts limit:3 %}
	{% if post.promoted %}
		<article id="article-{{ post.slug }}" class="post">
			<header>
				<hgroup>
					<h1><a href="{{ post.url | relative_url }}">{{ post.title }}</a></h1>
				</hgroup>
			</header>
			<div class="wrapper">
				<main>
					{{ post.excerpt }}
					<a href="{{ post.url | relative_url }}">Read more...</a>
				</main>
				<footer>{% if post.meta %}<p class="meta">{{ post.meta }}</p>{% endif %}</footer>
			</div>
		</article>
	{% endif %}
{% endfor %}
