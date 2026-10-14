// sub_08040780 at 0x08040780 (thumb)

undefined4 sub_08040780(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar5 + 0x14f) == 0xff) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar6 = 6;
      sub_08002B10(0x25);
    }
    else {
      *(undefined *)(param_1 + 0xe) = 1;
      sub_0801CC9C(param_1);
      sub_0801CEEC(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
      sub_0801CF00(param_1,*(undefined2 *)(&DAT_088520cc + (uint)*(byte *)(iVar5 + 0x14f) * 2));
      *(int *)(param_1 + 0x40) = param_1 + 100;
      *(undefined *)(param_1 + 0x25) = 0x11;
      iVar6 = 0xe;
      sub_08002B10(0x1c8);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    iVar2 = sub_0803A534(iVar5);
    uVar3 = iVar2 + iVar6 & 0xff;
    cVar1 = sub_08038A84(iVar5);
    if (cVar1 != '\0') {
      uVar3 = (uVar3 << 0x19) >> 0x18;
    }
    *(char *)(param_1 + 0x10) = *(char *)(iVar5 + 0x14f);
    cVar1 = *(char *)(iVar5 + 0x14f);
    if ((cVar1 == '\x03') || (cVar1 == '\a')) {
      uVar4 = 2;
      if (*(char *)(param_1 + 0x11) != '\0') {
        uVar4 = 6;
      }
    }
    else {
      uVar4 = (int)(-(uint)*(byte *)(param_1 + 0x11) | (uint)*(byte *)(param_1 + 0x11)) >> 0x1f & 4;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&UNK_0885200c + uVar4 * 0x18,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_08005794(param_1 + 0x74,&UNK_0885200c + uVar4 * 0x18,uVar3,0xffffffff,0xffffffff,0xffffffff)
    ;
    *(undefined4 *)(param_1 + 0x98) = 0x8040b19;
    *(undefined *)(param_1 + 0xbd) = 0;
    sub_08040904(param_1);
  }
  return in_lr;
}

