// sub_080E9418 at 0x080E9418 (thumb)

undefined4 sub_080E9418(undefined4 param_1)

{
  undefined4 in_lr;
  
  sub_08002638(&DAT_08433214,(DAT_0202e612 - 0x200) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433220,(DAT_0202e412 - 9) * 0x20 + 0x200);
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_08002638(&DAT_0843323c,(DAT_0202e616 - 0x280) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08433248,(DAT_0202e416 - 8) * 0x20 + 0x200);
    sub_08002638(&DAT_08433250,(DAT_0202e618 - 800) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_0843325c,(DAT_0202e418 - 0xe) * 0x20 + 0x200);
    sub_08002638(&DAT_08433908,(DAT_0202e6c4 - 0x3a0) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08433914,(DAT_0202e4c4 - 0xf) * 0x20 + 0x200);
  }
  else {
    sub_08002638(&DAT_08433228,(DAT_0202e614 - 0x280) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08433234,(DAT_0202e414 - 8) * 0x20 + 0x200);
  }
  sub_080E9590(param_1);
  return in_lr;
}

