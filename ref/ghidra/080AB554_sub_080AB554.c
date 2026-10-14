// sub_080AB554 at 0x080AB554 (thumb)

undefined4 sub_080AB554(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x05') {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_080055FC(param_1 + 0x74,&DAT_082b6628,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x80ab6e5;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x18;
    *(wchar16 **)(param_1 + 0x28) = L"";
    *(undefined4 *)(param_1 + 0xbc) = 0;
    uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080AB69C(param_1);
  }
  else {
    sub_0809C8B4(param_1);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
    bVar1 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar1 | 2;
    if ((*(char *)(param_1 + 0x10) != '\x02') || (*(char *)(param_1 + 0x11) == '\0')) {
      *(byte *)(param_1 + 10) = bVar1 | 6;
      sub_080055FC(param_1 + 0x74,&DAT_082b660c,param_1 + 0x4c,0);
      *(int *)(param_1 + 0xb4) = param_1;
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x4c) + 0x800;
    *(int *)(param_1 + 0x4c) = iVar3;
    iVar3 = sub_08008360(iVar3,*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = iVar3 + 0x100;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    if (((*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) + 0x2000U < 0x4001) &&
       ((*(int *)(DAT_0202286c + 0x50) - (iVar3 + 0x100)) + 0x2000U < 0x4001)) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080AB69C(param_1);
  }
  return in_lr;
}

