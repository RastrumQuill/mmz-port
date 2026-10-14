// sub_080268C4 at 0x080268C4 (thumb)

undefined4 sub_080268C4(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
  bVar2 = bVar1 & 2;
  if ((bVar1 & 2) == 0) {
    if ((byte)(*(char *)(param_1 + 0x73) - 2U) < 2) {
      if ((bVar1 & 0xc) == 0) {
        *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
        *(char *)(param_1 + 0xd) = (char)(bVar1 & 0xc);
        *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
        bVar2 = 0;
        *(ushort *)(param_1 + 0xe) = bVar1 & 0xc;
      }
      else {
        *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
        *(byte *)(param_1 + 0xd) = bVar2;
        *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
        *(undefined2 *)(param_1 + 0xe) = 1;
      }
      *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x176);
      *(byte *)(param_1 + 0x176) = bVar2;
      *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x177);
      *(byte *)(param_1 + 0x177) = bVar2;
      *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x178);
      *(byte *)(param_1 + 0x178) = bVar2;
      *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x179);
      *(byte *)(param_1 + 0x179) = bVar2;
    }
  }
  else {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 2;
    sub_0801EA38(param_1,0x11,1 - *(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
  }
  return in_lr;
}

