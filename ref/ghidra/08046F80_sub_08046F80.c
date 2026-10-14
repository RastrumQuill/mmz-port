// sub_08046F80 at 0x08046F80 (thumb)

undefined4 sub_08046F80(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xe);
    sub_080297C0(param_1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08001EAC(0xb7);
  }
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x73) != '\x04') goto LAB_0804703e;
    sub_08029778(param_1,0x10);
    sub_08001EAC(0xb7);
    *(undefined *)(param_1 + 0x12) = 0x1c;
  }
  else {
    if (1 < bVar1) {
      if ((bVar1 == 2) && ((DAT_02022b6e & 1) == 0)) {
        sub_0800561C(param_1 + 0x74,&DAT_082ae9c4);
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 1;
        uVar2 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
        *(undefined4 *)(param_1 + 0xc4) = uVar2;
        uVar2 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
        *(undefined4 *)(param_1 + 0xd8) = uVar2;
        uVar2 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
        *(undefined4 *)(param_1 + 0xe0) = uVar2;
      }
      goto LAB_0804703e;
    }
    if ((bVar1 != 0) || (*(char *)(param_1 + 0x73) != '\x04')) goto LAB_0804703e;
    sub_08029778(param_1,0xf);
    sub_08001EAC(0xb7);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0804703e:
  sub_080297C0(param_1);
  return in_lr;
}

