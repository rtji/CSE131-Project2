
void foo() {
  vec4 myVar;
  vec2 a = myVar.xy;
	vec2 b = myVar.zw;
	vec3 b = myVar.w;
	vec3 c = b.w;
}
