// sub_08030638 at 0x08030638 (thumb)

undefined4 sub_08030638(int param_1)

{
  undefined uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  if ((uVar2 * 2 >> 0x11 & 0x1f) < (uint)*(byte *)(param_1 + 200)) {
    *(undefined *)(param_1 + 0xd) = 0xf;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_0800561C(param_1 + 0x74,&DAT_082ad390);
  }
  else {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    if ((uVar2 * 2 >> 0x11 & 1) == 0) {
      if (*(char *)(param_1 + 0xc0) < '\x04') {
        uVar1 = 7;
      }
      else if (*(byte *)(DAT_02022b20 + 1) < 5) {
        uVar1 = 4;
      }
      else {
        uVar1 = 8;
      }
    }
    else if (*(byte *)(DAT_02022b20 + 1) < 5) {
      uVar1 = 4;
    }
    else {
      uVar1 = 8;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(undefined *)(param_1 + 0xe) = 1;
    *(char *)(param_1 + 200) = *(char *)(param_1 + 200) + '\x05';
  }
  return in_lr;
}

