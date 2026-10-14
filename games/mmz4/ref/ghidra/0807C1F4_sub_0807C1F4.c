// sub_0807C1F4 at 0x0807C1F4 (thumb)

undefined4 sub_0807C1F4(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  int local_50 [5];
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined local_30 [4];
  int local_2c [2];
  int *local_24;
  undefined4 uStack_4;
  
  piVar1 = local_50;
  local_50[0] = -0x7000;
  local_50[1] = 0x1800;
  local_50[2] = 0xffffd000;
  local_50[3] = 0x3800;
  local_50[4] = 0x3000;
  uStack_3c = 0x3800;
  local_38 = 0x7000;
  uStack_34 = 0x1800;
  sub_08128B5C(local_30,&DAT_08129328,4);
  uStack_4 = in_lr;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x144);
    sub_08001D30(&DAT_08c44e24,(DAT_0202e1aa - 0x2c4) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44e30,(DAT_0202dfaa - 5) * 0x20 + 0x200);
    iVar3 = 0;
    piVar2 = local_50 + 1;
    local_24 = local_2c;
    do {
      local_2c[0] = *(int *)(param_1 + 0xb4) + *piVar1 + 0x7800;
      local_24[1] = *(int *)(param_1 + 0xb8) + *piVar2 + 0x5000;
      sub_080B58C8(param_1,local_24,local_30[iVar3]);
      piVar2 = piVar2 + 2;
      piVar1 = piVar1 + 2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    sub_0807E7E0(param_1,0xc);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    sub_0801CFF0(param_1);
  }
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_0885a29c)[*(ushort *)(&DAT_0885a2a8 + (uint)*(byte *)(param_1 + 0xbc) * 2)]));
  if (*(short *)(param_1 + 0xcc) == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return uStack_4;
}

