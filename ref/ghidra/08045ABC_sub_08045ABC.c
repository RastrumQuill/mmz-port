// sub_08045ABC at 0x08045ABC (thumb)

undefined4 sub_08045ABC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0);
    *(undefined *)(iVar3 + 0x11) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    uVar2 = sub_08086074(param_1,0,0);
    *(undefined4 *)(param_1 + 0xd8) = uVar2;
    sub_08001EAC(0xb1);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == ' ') {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_080014E8(&DAT_085102d0,(DAT_020231b8 - 0x210) * 0x20 + 0x10000);
    sub_0800179C(&DAT_085102dc,(DAT_02023144 - 6) * 0x20 + 0x200);
    local_18 = 0x32c800;
    local_14 = 0xbc000;
    sub_080A9070(&local_18,0,2);
    local_18 = 0x32f800;
    sub_080A9070(&local_18,0,1);
    local_18 = 0x332800;
    sub_080A9070(&local_18,0,0);
    local_18 = 0x33e800;
    sub_080A9070(&local_18,0,0);
    local_18 = 0x341800;
    sub_080A9070(&local_18,0,1);
    local_18 = 0x344800;
    sub_080A9070(&local_18,0,2);
    local_18 = 0x346800;
    sub_080A9070(&local_18,1,3);
  }
  return in_lr;
}

