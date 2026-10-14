// sub_0800E074 at 0x0800E074 (thumb)

undefined4 sub_0800E074(int param_1)

{
  undefined2 uVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  
  local_24 = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = (*(uint *)(param_1 + 0x5c) << 0x10) >> 0x14;
    (&DAT_02000a04)[uVar4] = (ushort)*(undefined4 *)(param_1 + 100) | 0x4045;
    *(undefined4 *)(&DAT_02000a0c + uVar4 * 2) = 0;
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(undefined2 *)(param_1 + 0x70) = 0;
    if (DAT_0202dad4 == '\0') {
      *(undefined2 *)(param_1 + 0x6a) = 0;
    }
    else {
      if ((DAT_0202cac0 & 0xf) == 3) {
        uVar1 = 0xfe;
      }
      else {
        uVar1 = 0x7e;
      }
      *(undefined2 *)(param_1 + 0x6a) = uVar1;
      DAT_0202dad4 = '\0';
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    puVar2 = &DAT_02000a04 + (local_24 >> 4);
    local_34 = 0;
    sub_081284E4(&local_34,(*puVar2 & 0x1f00) * 8 + 0x6000000,0x1000200);
    sub_081284E4(&DAT_08b3d6e8,&DAT_06000800 + (*puVar2 & 0x1f00) * 8,0xa0);
    local_30 = 0;
    sub_081284E4(&local_30,&DAT_06000a80 + (*puVar2 & 0x1f00) * 8,0x1000160);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  puVar2 = (ushort *)(param_1 + 0x68);
  if (*puVar2 == 0) {
    uVar4 = 0x100;
    if ((DAT_0202cac0 & 0xf) == 3) {
      uVar4 = 0x180;
    }
    puVar3 = (ushort *)(param_1 + 0x6a);
    if (((DAT_0202e918 & 8) == 0) || ((int)(uVar4 - 0x78) <= (int)(uint)*puVar3)) {
      *puVar3 = *puVar3 + 1;
      if (((uint)*puVar3 == uVar4 - 0x78) || ((uint)*puVar3 == uVar4 - 0x3c)) {
        DAT_0202ea6c = 0x8000;
      }
      if (uVar4 <= *puVar3) {
        *puVar2 = 0x100;
        *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x34);
        *puVar3 = 0;
        DAT_0202ea6e = 0x8006;
      }
    }
  }
  else {
    if (*puVar2 == 0x100) {
      local_2c = *(int *)(param_1 + 0x34) * 0x100 + 0x18000;
      local_28 = 0x2f800;
      sub_080F1AB4(&local_2c,0);
      sub_08002B10(0x5a);
    }
    *puVar2 = *puVar2 + 0x100;
    if ((*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x34)) * 0x10 + 0x4000 < (int)(uint)*puVar2)
    {
      puVar3 = &DAT_02000a04 + (local_24 >> 4);
      local_30 = 0;
      sub_081284E4(&local_30,(*puVar3 & 0x1f00) * 8 + 0x6000000,0x1000200);
      sub_081284E4(&DAT_08b3d6e8,&DAT_06000800 + (*puVar3 & 0x1f00) * 8,0xa0);
      local_30 = 0;
      sub_081284E4(&local_30,&DAT_06000a80 + (*puVar3 & 0x1f00) * 8,0x1000160);
      *puVar2 = 0;
      *(undefined2 *)(param_1 + 0x70) = 0;
      DAT_0202ea6c = DAT_0202ea6c | 0x4000;
      DAT_0202ea6e = 0x8000;
    }
  }
  if (*(int *)(param_1 + 0x38) < 800) {
    DAT_02000a00 = (ushort)(local_24 << 8) | DAT_02000a00;
  }
  else {
    DAT_02000a00 = DAT_02000a00 & ~(ushort)(local_24 << 8);
  }
  return in_lr;
}

