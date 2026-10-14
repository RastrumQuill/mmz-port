// sub_0800D700 at 0x0800D700 (thumb)

undefined4 sub_0800D700(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) - 0x1961U < 0x1bf) {
    iVar1 = sub_080047C0(0xe1);
    if (iVar1 == 0) {
      sub_0800471C(0xe1);
    }
    sub_080047D8(0xe1);
  }
  else {
    iVar1 = sub_080047C0(0xe1);
    if (iVar1 != 0) {
      sub_08004768(0xe1);
    }
  }
  return in_lr;
}

