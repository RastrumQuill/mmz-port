// sub_0809E780 at 0x0809E780 (thumb)

undefined4 sub_0809E780(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined local_24;
  
  if (*(int *)(param_1 + 0xc4) == 0) {
    local_24 = 0x1e;
    uVar1 = 0x28;
  }
  else {
    local_24 = 0x28;
    uVar1 = 0x1e;
  }
  *(undefined *)(param_1 + 9) = 5;
  *(undefined4 *)(param_1 + 0x14) = 0x809e3fd;
  *(undefined2 *)(param_1 + 0x1c) = DAT_0202317a;
  *(undefined *)(param_1 + 0x1e) = DAT_02023125;
  *(undefined *)(param_1 + 0x10) = 2;
  *(undefined *)(param_1 + 0x12) = 0x23;
  iVar2 = sub_08005428(DAT_02023118);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 5;
    *(undefined4 *)(iVar2 + 0x14) = 0x809e3fd;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_0202317a;
    *(undefined *)(iVar2 + 0x1e) = DAT_02023125;
    *(undefined *)(iVar2 + 0x10) = 1;
    *(undefined *)(iVar2 + 0x12) = local_24;
    *(int *)(iVar2 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x1000;
    *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar2 + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  }
  iVar2 = sub_08005428(DAT_02023118);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 5;
    *(undefined4 *)(iVar2 + 0x14) = 0x809e3fd;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_0202317a;
    *(undefined *)(iVar2 + 0x1e) = DAT_02023125;
    *(undefined *)(iVar2 + 0x10) = 3;
    *(undefined *)(iVar2 + 0x12) = uVar1;
    *(int *)(iVar2 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x1000;
    *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar2 + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  *(undefined *)(param_1 + 0xd) = 2;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

