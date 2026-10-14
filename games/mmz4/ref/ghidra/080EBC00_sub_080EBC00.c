// sub_080EBC00 at 0x080EBC00 (thumb)

undefined4 sub_080EBC00(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x54) = 0x71800;
    *(undefined4 *)(param_1 + 0x58) = 0x20800;
    if (*(char *)(param_1 + 0xd) != '\0') {
      iVar2 = *(int *)(param_1 + 100);
      iVar6 = *(int *)(param_1 + 0x68);
      iVar4 = *(int *)(param_1 + 0x5c);
      iVar3 = *(int *)(param_1 + 0x60);
      if (*(char *)(param_1 + 0x10) == '\x01') {
        sVar1 = sub_0800C66C(iVar2,iVar6);
        if (sVar1 != 0) {
          sub_080EB87C(param_1,iVar2,iVar6);
        }
        iVar5 = iVar2 + iVar4;
        iVar7 = iVar6 + iVar3;
        sVar1 = sub_0800C66C(iVar5,iVar7);
        if (sVar1 != 0) {
          sub_080EB87C(param_1,iVar5,iVar7);
        }
        iVar6 = iVar6 - iVar3;
        sVar1 = sub_0800C66C(iVar5,iVar6);
        if (sVar1 != 0) {
          sub_080EB87C(param_1,iVar5,iVar6);
        }
        iVar2 = iVar2 - iVar4;
        sVar1 = sub_0800C66C(iVar2,iVar7);
        if (sVar1 != 0) {
          sub_080EB87C(param_1,iVar2,iVar7);
        }
        sVar1 = sub_0800C66C(iVar2,iVar6);
        if (sVar1 != 0) {
          sub_080EB87C(param_1,iVar2,iVar6);
        }
      }
      *(undefined *)(param_1 + 0xd) = 0;
    }
  }
  else {
    sVar1 = sub_080EB9D8(param_1);
    if (sVar1 == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  return in_lr;
}

