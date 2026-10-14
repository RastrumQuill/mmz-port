// sub_08033138 at 0x08033138 (thumb)

undefined4 sub_08033138(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x19);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xd2) = 0xe;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0xd2) + -1;
  *(char *)(param_1 + 0xd2) = cVar1;
  if (cVar1 == -1) {
    sub_0807A5F8(param_1,7,(*(byte *)(param_1 + 0x13) & 0xf) << 4 | (uint)*(byte *)(param_1 + 0x12))
    ;
    sub_08001EAC(0x37);
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (bVar2 < 0xc) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = 0x22;
    }
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

