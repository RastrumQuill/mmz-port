// sub_0801F4A4 at 0x0801F4A4 (thumb)

undefined4 sub_0801F4A4(void)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_08006E94();
  sub_08027584(&DAT_0202e920);
  sub_08002348();
  if ((DAT_0202e918 & 8) == 0) {
    if ((*(uint *)(DAT_0202e8e0 + 0x10) & 2) != 0) {
      DAT_0202e8b4 = DAT_0202e8b4 & 0x7f;
      DAT_0202e8b5 = DAT_0202e8b5 & 0xe0 | 0x20;
    }
    if ((*(uint *)(DAT_0202e8e0 + 0x10) & 4) != 0) {
      DAT_0202e8b6 = DAT_0202e8b6 | 1;
      DAT_0202e8b4 = DAT_0202e8b4 & 0x7f;
      DAT_0202e8b5 = DAT_0202e8b5 & 0xe0;
    }
    bVar1 = 0;
    uVar2 = 3;
    do {
      if ((1 << uVar2 & *(uint *)(DAT_0202e8e0 + 0x10)) != 0) {
        bVar1 = bVar1 + 1;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 0xb);
    if (3 < bVar1) {
      DAT_0202e8b6 = DAT_0202e8b6 | 0x20;
    }
    if ((*(uint *)(DAT_0202e8e0 + 0x10) & 0x800) != 0) {
      DAT_0202e8b6 = DAT_0202e8b6 | 0x40;
    }
    if ((*(uint *)(DAT_0202e8e0 + 0x10) & 0x1000) != 0) {
      DAT_0202e8b6 = DAT_0202e8b6 | 0x80;
    }
    if ((*(uint *)(DAT_0202e8e0 + 0x10) & 0x7f8) == 0x7f8) {
      DAT_0202e8b7 = DAT_0202e8b7 | 1;
    }
    if ((*(uint *)(DAT_0202e8e0 + 0x10) & 0x2000) != 0) {
      DAT_0202e8b7 = DAT_0202e8b7 | 2;
    }
    if ((*(uint *)(DAT_0202e8e0 + 0x10) & 0x4000) != 0) {
      DAT_0202e8b7 = DAT_0202e8b7 | 4;
    }
    if ((*(uint *)(DAT_0202e8e0 + 0x10) & 0x8000) != 0) {
      DAT_0202e8b7 = DAT_0202e8b7 | 8;
    }
    sub_0801E918(&DAT_02035880);
  }
  else {
    sub_0801E878((undefined)DAT_0202e910,&DAT_02035880);
  }
  sub_080382F0(DAT_020359b8,&DAT_02035958);
  sub_08038360(&DAT_02035958);
  return in_lr;
}

