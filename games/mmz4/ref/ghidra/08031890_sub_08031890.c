// sub_08031890 at 0x08031890 (thumb)

undefined4 sub_08031890(int param_1)

{
  byte bVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*(byte *)(param_1 + 0x174) * 8,0);
  sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*(byte *)(param_1 + 0x174) * 8,1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar3 = sub_08038528(param_1);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)sVar3;
  bVar2 = false;
  bVar1 = *(byte *)(param_1 + 0x14c);
  if (bVar1 < 8) {
    *(byte *)(param_1 + 0x14c) = bVar1 + 1;
  }
  else {
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      uVar4 = *(uint *)(param_1 + 600);
      uVar5 = 0x2000;
    }
    else {
      uVar4 = *(uint *)(param_1 + 600);
      uVar5 = 0x8000;
    }
    if ((uVar4 & uVar5) == 0) {
      bVar2 = true;
    }
  }
  sVar3 = sub_0802BFD0(param_1,&DAT_0884fe30 + (uint)*(byte *)(param_1 + 0x174) * 8,0);
  if (((0 < *(int *)(param_1 + 0x60)) || (sVar3 != 0)) || (bVar2)) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
    sVar3 = sub_080386E0(param_1);
    *(int *)(param_1 + 0x5c) = (int)sVar3;
  }
  return in_lr;
}

