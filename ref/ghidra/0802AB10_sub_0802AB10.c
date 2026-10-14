// sub_0802AB10 at 0x0802AB10 (thumb)

undefined4 sub_0802AB10(int param_1)

{
  undefined uVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  sub_080297C0();
  if ((int)*(short *)(param_1 + 0x8c) < (int)*(char *)(param_1 + 0xc4)) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else {
    pbVar2 = (byte *)(param_1 + 0xc0);
    if (*pbVar2 == 0) {
      uVar1 = 3;
    }
    else {
      uVar1 = 4;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(undefined *)(param_1 + 0xe) = 1;
    *pbVar2 = *pbVar2 + 1 & 1;
  }
  return in_lr;
}

