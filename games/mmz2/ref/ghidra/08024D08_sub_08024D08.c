// sub_08024D08 at 0x08024D08 (thumb)

undefined8 sub_08024D08(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x191) & 0x1e) == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 0x400) == 0) {
      *(undefined *)(param_1 + 0x4d) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x18d) = 0;
      sub_080236EC(param_1);
      uVar1 = (uint)*(byte *)(param_1 + 0xd);
      if (uVar1 == 5) {
        *(byte *)(param_1 + 0x174) = *(byte *)(param_1 + 0xd);
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
        *(undefined2 *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
        *(undefined *)(param_1 + 0x176) = 0;
        *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
        *(undefined *)(param_1 + 0x177) = 0;
        *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
        *(undefined *)(param_1 + 0x178) = 0;
        *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
        *(undefined *)(param_1 + 0x179) = 0;
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 5;
    }
  }
  else {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 0;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 0;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    uVar1 = 7;
  }
  return CONCAT44(in_lr,uVar1);
}

