// sub_0806DDEC at 0x0806DDEC (thumb)

undefined8 sub_0806DDEC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar1 = sub_08063614(param_1);
    if (iVar1 != 0) {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362f6c + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362f7c + (uint)*(byte *)(param_1 + 0xd) * 4));
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      sub_080177F4(param_1);
      uVar2 = 1;
      goto LAB_0806de52;
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    iVar1 = sub_08063614(param_1);
    if (iVar1 != 0) {
      uVar2 = 1;
      goto LAB_0806de52;
    }
    *(undefined *)(param_1 + 0xf) = 0;
  }
  uVar2 = 0;
LAB_0806de52:
  return CONCAT44(in_lr,uVar2);
}

