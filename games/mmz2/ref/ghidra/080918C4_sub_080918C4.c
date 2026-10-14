// sub_080918C4 at 0x080918C4 (thumb)

undefined4 sub_080918C4(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_080032EC(0x35);
    *(undefined *)(param_1 + 0x25) = 1;
    sub_08006E08(param_1 + 0x74,&DAT_08342674);
    *(undefined2 *)(param_1 + 0xb8) = 0x800;
    *(undefined *)(param_1 + 0xb6) = 2;
    *(undefined *)(param_1 + 0xb7) = 1;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 == 0x10) {
    sub_08006E08(param_1 + 0x74,&DAT_083426d4);
  }
  else if (bVar1 < 0x11) {
    if (bVar1 == 8) {
      sub_08006E08(param_1 + 0x74,&DAT_083426a4);
    }
  }
  else if (bVar1 == 0x18) {
    if (*(char *)(param_1 + 0xbd) != '\0') {
      if (DAT_0202ebfc < 9999) {
        DAT_0202ebfc = DAT_0202ebfc + 1;
      }
      sub_0801DE2C(param_1,param_1 + 0x54);
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    return in_lr;
  }
  pbVar2 = (byte *)(param_1 + 0xb6);
  if (*pbVar2 < 5) {
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      pbVar4 = (byte *)(param_1 + 0xb7);
      iVar6 = (uint)(*pbVar2 >> 1) * 0x800 + (*pbVar4 - 1) * -0x1000 + -0x800;
      iVar3 = *pbVar2 - 1;
      iVar5 = iVar3 * 0x800;
      if (*(char *)(param_1 + 0x11) == '\0') {
        local_20 = *(int *)(param_1 + 0x54) - iVar6;
        local_1c = *(int *)(param_1 + 0x58) + iVar3 * -0x800;
        sub_080B666C(&local_20,0,2,0);
        sub_0800D3B4(&local_20);
        local_20 = *(int *)(param_1 + 0x54) + iVar5;
        local_1c = *(int *)(param_1 + 0x58) - iVar6;
        sub_080B666C(&local_20,0,2,0);
        sub_0800D3B4(&local_20);
        local_20 = *(int *)(param_1 + 0x54) + iVar6;
        local_1c = *(int *)(param_1 + 0x58) + iVar5;
        sub_080B666C(&local_20,0,2,0);
        sub_0800D3B4(&local_20);
        local_20 = *(int *)(param_1 + 0x54) + iVar3 * -0x800;
        local_1c = *(int *)(param_1 + 0x58) + iVar6;
        sub_080B666C(&local_20,0,2,0);
        sub_0800D3B4(&local_20);
      }
      else {
        local_20 = *(int *)(param_1 + 0x54) - iVar6;
        local_1c = *(int *)(param_1 + 0x58) + iVar3 * -0x800;
        sub_080B666C(&local_20,0,2,0);
        sub_0800FB84(&local_20);
        local_20 = *(int *)(param_1 + 0x54) + iVar5;
        local_1c = *(int *)(param_1 + 0x58) - iVar6;
        sub_080B666C(&local_20,0,2,0);
        sub_0800FB84(&local_20);
        local_20 = *(int *)(param_1 + 0x54) + iVar6;
        local_1c = *(int *)(param_1 + 0x58) + iVar5;
        sub_080B666C(&local_20,0,2,0);
        sub_0800FB84(&local_20);
        local_20 = *(int *)(param_1 + 0x54) + iVar3 * -0x800;
        local_1c = *(int *)(param_1 + 0x58) + iVar6;
        sub_080B666C(&local_20,0,2,0);
        sub_0800FB84(&local_20);
      }
      iVar3 = param_1 + 0x54;
      sub_08015518(4,iVar3);
      bVar1 = *pbVar4;
      *pbVar4 = bVar1 + 1;
      if (*pbVar2 == (byte)(bVar1 + 1)) {
        if (*pbVar2 == 4) {
          if (*(short *)(param_1 + 0xba) == 0) {
            sub_0801DD2C(7,iVar3);
          }
          else {
            sub_0801DD2C(0,iVar3);
          }
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        }
        *pbVar2 = *pbVar2 + 1;
        *pbVar4 = 1;
      }
    }
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

