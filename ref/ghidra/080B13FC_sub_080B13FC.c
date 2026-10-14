// sub_080B13FC at 0x080B13FC (thumb)

undefined4 sub_080B13FC(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && ((DAT_02022ae1 & 2) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    sub_0809C6C4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_0809C930(param_1,*(undefined *)(param_1 + 0x10));
    sub_0809C980(param_1);
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      iVar2 = iVar2 + -0x7c00;
    }
    else {
      iVar2 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      iVar2 = iVar2 + 0x400;
    }
    *(int *)(param_1 + 0x50) = iVar2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&UNK_082b6b6c + (uint)*(byte *)(param_1 + 0x10) * 0x1c,
                 param_1 + 0x4c,0x60);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x80b17a9;
    *(undefined2 *)(param_1 + 0xc4) = 0xffff;
    sub_080014E8(&DAT_085104d8,(DAT_020231ec - 0x100) * 0x20 + 0x10000);
    sub_0800179C(&DAT_085104e4,(DAT_0202315e - 10) * 0x20 + 0x200);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    uVar3 = *(byte *)(param_1 + 0x10) + 0x69;
    if (((int)(uint)(byte)(&DAT_02022ad4)[(int)uVar3 >> 3] >> (uVar3 & 7) & 1U) == 0) {
      uVar1 = sub_08001EAC(0x86);
      *(undefined2 *)(param_1 + 0xc4) = uVar1;
    }
    else {
      sub_0809C930(param_1,*(byte *)(param_1 + 0x10) + 4);
      sub_0809C980(param_1);
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined *)(param_1 + 0xf) = 4;
    }
    sub_080B157C(param_1);
  }
  return in_lr;
}

