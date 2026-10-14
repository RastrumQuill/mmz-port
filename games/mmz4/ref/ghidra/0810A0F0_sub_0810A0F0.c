// sub_0810A0F0 at 0x0810A0F0 (thumb)

undefined4 sub_0810A0F0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x63a8);
  if (*(char *)(param_1 + 0x11) == '\0') {
    bVar1 = *(byte *)(iVar3 + 0xc0);
    uVar2 = 0x3800;
    *(undefined4 *)(param_1 + 0x54) = 0x3800;
  }
  else {
    bVar1 = *(byte *)(iVar3 + 0xc1);
    *(undefined4 *)(param_1 + 0x54) = 0x3800;
    uVar2 = 0x6000;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  if (bVar1 == 1) {
    uVar2 = 0x3401;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        uVar2 = 0x3400;
        goto LAB_0810a15a;
      }
    }
    else if (bVar1 == 2) {
      uVar2 = 0x3402;
      goto LAB_0810a15a;
    }
    if (*(byte *)(iVar3 + 0xe6) != 0xff) {
      sub_0801CF00(param_1,*(byte *)(iVar3 + 0xe6) + 0x3421);
      return in_lr;
    }
    uVar2 = 0x342b;
  }
LAB_0810a15a:
  sub_0801CF00(param_1,uVar2);
  return in_lr;
}

