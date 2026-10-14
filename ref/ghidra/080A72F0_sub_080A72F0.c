// sub_080A72F0 at 0x080A72F0 (thumb)

undefined4 sub_080A72F0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(DAT_02022b20 + 0x18) & 0x100) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    sub_0809C6C4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_0809C930(param_1,0);
    sub_0809C980(param_1);
    *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x10);
    if (*(char *)(param_1 + 0x10) == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
    iVar2 = *(int *)(param_1 + 0x4c) + 0x800;
    *(int *)(param_1 + 0x4c) = iVar2;
    uVar3 = sub_08008360(iVar2,*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  return in_lr;
}

