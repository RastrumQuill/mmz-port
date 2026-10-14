// sub_08064618 at 0x08064618 (thumb)

undefined4 sub_08064618(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b0870,param_1 + 0x4c,0xff);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined *)(param_1 + 0x12) = 0x1c;
  }
  if ((*(ushort *)(param_1 + 0x90) & 0x100) != 0) {
    if ((*(byte *)(iVar1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(iVar1 + 0x4c);
      iVar4 = -0x800;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x4c);
      iVar4 = 0x800;
    }
    iVar6 = *(int *)(iVar1 + 0x50);
    iVar7 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    iVar5 = *(int *)(iVar7 + 0x4c);
    iVar2 = sub_080C8AD0((iVar2 + iVar4) - iVar5,*(undefined *)(param_1 + 0x12));
    *(int *)(iVar7 + 0x4c) = iVar5 + iVar2;
    iVar4 = *(int *)(iVar7 + 0x50);
    iVar2 = sub_080C8AD0((iVar6 + -0x4000) - iVar4,*(undefined *)(param_1 + 0x12));
    *(int *)(iVar7 + 0x50) = iVar4 + iVar2;
    uVar3 = *(undefined4 *)(iVar1 + 0x50);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    if ((*(char *)(iVar1 + 0xd) != '\x15') && (*(char *)(iVar1 + 0xe) == '\0')) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
  }
  return in_lr;
}

