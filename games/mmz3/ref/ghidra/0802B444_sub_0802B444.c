// sub_0802B444 at 0x0802B444 (thumb)

undefined4 sub_0802B444(int param_1)

{
  byte bVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_08025C04(param_1,&DAT_0835b034 + (uint)*(byte *)(param_1 + 0x147) * 8,0);
  sub_08025C04(param_1,&DAT_0835b034 + (uint)*(byte *)(param_1 + 0x147) * 8,1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar3 = sub_08032B80(param_1);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)sVar3;
  bVar2 = false;
  bVar1 = *(byte *)(param_1 + 0x134);
  if (bVar1 < 8) {
    *(byte *)(param_1 + 0x134) = bVar1 + 1;
  }
  else {
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      uVar4 = *(uint *)(param_1 + 0x218);
      uVar5 = 0x2000;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x218);
      uVar5 = 0x8000;
    }
    if ((uVar4 & uVar5) == 0) {
      bVar2 = true;
    }
  }
  sVar3 = sub_080263A0(param_1,&DAT_0835b034 + (uint)*(byte *)(param_1 + 0x147) * 8,0);
  if (((0 < *(int *)(param_1 + 0x60)) || (sVar3 != 0)) || (bVar2)) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
    sVar3 = sub_08032C9C(param_1);
    *(int *)(param_1 + 0x5c) = (int)sVar3;
  }
  return in_lr;
}

