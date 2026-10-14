// sub_08013580 at 0x08013580 (thumb)

undefined4 sub_08013580(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *param_1 + -0x800 >> 0xc;
  iVar3 = param_1[1] + 0x800 >> 0xc;
  if (iVar2 == 0x18b) {
    puVar1 = &DAT_08340730;
  }
  else if (iVar2 == 0x193) {
    puVar1 = &DAT_08340730;
  }
  else if (iVar2 == 0x1ab) {
    puVar1 = &DAT_08340738;
  }
  else {
    if (iVar2 != 0x1b9) {
      sub_08009348(iVar2,iVar3,&DAT_08340728);
      sub_08009348(iVar2,iVar3 + 1,&DAT_08340728);
      return in_lr;
    }
    puVar1 = &DAT_08340740;
  }
  sub_08009348(iVar2,iVar3,puVar1);
  sub_08009348(iVar2,iVar3 + 1,puVar1);
  return in_lr;
}

