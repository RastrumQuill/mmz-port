// sub_0800E4A0 at 0x0800E4A0 (thumb)

undefined4 sub_0800E4A0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *param_1 + -0x1000 >> 0xc;
  iVar4 = param_1[1] + 0x800 >> 0xc;
  if (iVar4 < 0x14) {
    iVar1 = -0xf8;
    puVar2 = &UNK_0833a7ba;
  }
  else {
    if (iVar4 < 0x39) {
      sub_08009348(iVar3,iVar4,&UNK_0833a7d2 + (iVar3 + -0xf2 >> 1) * 8);
      return in_lr;
    }
    iVar1 = -0xf6;
    puVar2 = &UNK_0833a80a;
  }
  sub_08009348(iVar3,iVar4,puVar2 + (iVar3 + iVar1 >> 1) * 8);
  return in_lr;
}

