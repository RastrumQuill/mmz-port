// sub_0803475C at 0x0803475C (thumb)

undefined8 sub_0803475C(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x17d);
  *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
  *(undefined *)(param_1 + 0x176) = 3;
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 6;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 1;
  *(char *)(param_1 + 0x17d) = *(char *)(param_1 + 0x179);
  *(char *)(param_1 + 0x179) = cVar1;
  uVar2 = (uint)(byte)(&DAT_08335dd8)[*(byte *)(param_1 + 0xd)];
  if (cVar1 == '\x03') {
    uVar2 = uVar2 + 1;
  }
  sub_0801EA38(param_1,uVar2,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
  return CONCAT44(in_lr,3);
}

