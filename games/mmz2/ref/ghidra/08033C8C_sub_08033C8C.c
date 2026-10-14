// sub_08033C8C at 0x08033C8C (thumb)

undefined8 sub_08033C8C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  cVar2 = sub_080EF118(param_1,*(undefined4 *)(&DAT_083345b4 + (uint)*(byte *)(param_1 + 0x174) * 4)
                      );
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0x2b7) = 0;
    *(undefined *)(param_1 + 0x2b8) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x2b7) = 0;
    *(undefined *)(param_1 + 0x2b8) = 0;
    if ((*(char *)(param_1 + 0x17a) == '\x03') && (*(byte *)(param_1 + 0x17c) < 2)) {
      bVar1 = *(byte *)(param_1 + 0x174);
      if (*(char *)(param_1 + 0x17d) == '\x01') {
        if (((bVar1 == 0) && (*(char *)(param_1 + 0x175) == '\x01')) || (bVar1 == 2)) {
          uVar3 = (uint)*(byte *)(param_1 + 0x2b9);
        }
        else {
          uVar3 = (uint)*(char *)(param_1 + 0x72);
        }
        uVar3 = sub_080EF11C(param_1,uVar3,
                             *(undefined4 *)(&DAT_083345c4 + (uint)*(byte *)(param_1 + 0xd) * 4));
        uVar3 = uVar3 & 0xff;
        goto LAB_08033d4a;
      }
    }
  }
  uVar3 = 1;
LAB_08033d4a:
  return CONCAT44(in_lr,uVar3);
}

