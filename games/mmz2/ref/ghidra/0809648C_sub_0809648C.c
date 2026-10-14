// sub_0809648C at 0x0809648C (thumb)

undefined4 sub_0809648C(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_080032EC(0x35);
    *(undefined *)(param_1 + 0x25) = 1;
    sub_08006E08(param_1 + 0x74,&DAT_08342d78);
    *(undefined2 *)(param_1 + 0xb8) = 0x800;
    *(undefined *)(param_1 + 0xb6) = 2;
    *(undefined *)(param_1 + 0xb7) = 1;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if ((bVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar4 = bVar1 & 3;
  if ((bVar1 & 3) == 0) {
    pbVar3 = (byte *)(param_1 + 0xb6);
    pbVar7 = (byte *)(param_1 + 0xb7);
    iVar6 = (*pbVar3 - 2) * 0x800 - ((uint)*pbVar7 * 0x1000 + -0x800);
    iVar5 = *pbVar3 - 1;
    local_2c = *(int *)(param_1 + 0x54) - iVar6;
    local_28 = *(int *)(param_1 + 0x58) + iVar5 * -0x800;
    sub_080B666C(&local_2c,0,2,0);
    sub_0800A65C(&local_2c);
    local_2c = *(int *)(param_1 + 0x54) + iVar5 * 0x800;
    local_28 = *(int *)(param_1 + 0x58) - iVar6;
    sub_080B666C(&local_2c,0,2,0);
    sub_0800A65C(&local_2c);
    local_2c = *(int *)(param_1 + 0x54) + iVar6;
    local_28 = *(int *)(param_1 + 0x58) + iVar5 * 0x800;
    sub_080B666C(&local_2c,0,2,0);
    sub_0800A65C(&local_2c);
    local_2c = *(int *)(param_1 + 0x54) + iVar5 * -0x800;
    local_28 = *(int *)(param_1 + 0x58) + iVar6;
    sub_080B666C(&local_2c,0,2,0);
    sub_0800A65C(&local_2c);
    *pbVar7 = *pbVar7 + 1;
    sub_08015518(4,param_1 + 0x54);
    bVar1 = *pbVar3;
    if (bVar1 == *pbVar7) {
      if (bVar1 == 4) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        *(uint *)(param_1 + 0x8c) = uVar4;
        *(uint *)(param_1 + 0x90) = uVar4;
        *(char *)(param_1 + 0x94) = (char)uVar4;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 4;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
        local_24 = *(undefined4 *)(param_1 + 0xbc);
        local_20 = *(undefined4 *)(param_1 + 0xc0);
        sub_080962FC(param_1);
        return in_lr;
      }
      *pbVar3 = bVar1 + 1;
      *pbVar7 = 1;
      sub_08006E08(param_1 + 0x74,&DAT_08342d18 + (uint)*pbVar3 * 0x30);
    }
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

