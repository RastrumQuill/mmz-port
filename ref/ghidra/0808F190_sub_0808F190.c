// sub_0808F190 at 0x0808F190 (thumb)

undefined4 sub_0808F190(int param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (param_3 == '\0') {
    iVar1 = -0x2000;
  }
  else {
    iVar1 = 0x2000;
  }
  param_1 = param_1 + iVar1;
  local_18 = sub_08008360(param_1,param_2);
  param_2 = local_18 - param_2;
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  if (param_2 < 0xf01) {
    local_1c = param_1 + 0x1400;
    sub_0808D634(&local_1c,0,0x1100);
    local_1c = param_1 + -0x1400;
    sub_0808D634(&local_1c,1,0x1100);
    local_1c = param_1;
    sub_0808D698(&local_1c,param_3,2);
    sub_0808D698(&local_1c,param_3,2);
    sub_0808D698(&local_1c,param_3,3);
    sub_0808D698(&local_1c,param_3,3);
  }
  return in_lr;
}

