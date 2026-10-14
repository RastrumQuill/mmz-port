// sub_0809F9C4 at 0x0809F9C4 (thumb)

undefined4 sub_0809F9C4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  iVar3 = (uint)*(byte *)(param_1 + 0x11) * 0xf0 + 0x30;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xb8);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xbc);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0x12) = 0xc;
  if ((*(byte *)(DAT_0202286c + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    if (*(int *)(DAT_0202286c + 0x4c) + iVar3 * 0x100 <= *(int *)(iVar2 + 0xb8) + 0xc400) {
      *(byte *)(param_1 + 0x13) = *(byte *)(DAT_0202286c + 10) & 0x10;
      goto LAB_0809fa4e;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x20);
    if (*(int *)(DAT_0202286c + 0x4c) + iVar3 * -0x100 < *(int *)(iVar2 + 0xb8) + 0x2c00) {
      *(undefined *)(param_1 + 0x13) = 0;
      goto LAB_0809fa4e;
    }
  }
  *(undefined *)(param_1 + 0x13) = 1;
LAB_0809fa4e:
  if (*(char *)(param_1 + 0x13) == '\0') {
    local_1c = *(int *)(DAT_0202286c + 0x4c) + iVar3 * -0x100;
    if (local_1c < *(int *)(iVar2 + 0xb8) + 0x2c00) {
      local_1c = *(int *)(iVar2 + 0xb8) + 0xc00;
    }
    local_18 = *(int *)(param_1 + 0x50) + 0xf000;
    uVar1 = sub_0809F914(param_1,&local_1c,1,0);
    *(undefined4 *)(param_1 + 0xbc) = uVar1;
    *(int *)(param_1 + 0xc4) = local_1c + iVar3 * 0x200;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  else {
    local_1c = *(int *)(DAT_0202286c + 0x4c) + iVar3 * 0x100;
    if (*(int *)(iVar2 + 0xb8) + 0xc400 < local_1c) {
      local_1c = *(int *)(iVar2 + 0xb8) + 0xe400;
    }
    local_18 = *(int *)(param_1 + 0x50) + 0xf000;
    uVar1 = sub_0809F914(param_1,&local_1c,2,0);
    *(undefined4 *)(param_1 + 0xc0) = uVar1;
    *(int *)(param_1 + 0xc4) = local_1c + iVar3 * -0x200;
    *(undefined *)(param_1 + 0x13) = 1;
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(int *)(param_1 + 200) = *(int *)(*(int *)(param_1 + 0x20) + 0xb8) + 0x7800;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0809F98C(param_1);
  return in_lr;
}

