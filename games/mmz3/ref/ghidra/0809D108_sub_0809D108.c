// sub_0809D108 at 0x0809D108 (thumb)

undefined4 sub_0809D108(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      puVar4 = (uint *)(param_1 + 0xb8);
      *puVar4 = *puVar4 * 0x140 >> 8;
      *(undefined *)(param_1 + 0x13) = 0;
      sub_08017700(param_1,0xa07);
      sub_08007390(param_1 + 0x74,&DAT_08367320);
      *(uint *)(param_1 + 0x5c) =
           -((int)(short)(&DAT_080fe64c)[*(byte *)(param_1 + 0xb4)] * *puVar4 >> 8);
      *(uint *)(param_1 + 0x60) =
           (int)*(short *)((int)&DAT_080fe64c +
                          ((*(byte *)(param_1 + 0xb4) + 0x40) * 0x1000000 >> 0x17)) * *puVar4 >> 8;
      *(undefined *)(param_1 + 0xb5) = 1;
      sub_0800471C(300);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 0x13);
    *(byte *)(param_1 + 0x13) = bVar1 + 1;
    if ((bVar1 & 1) == 0) {
      sub_080B8C50(param_1 + 0x54,0);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = sub_08009B28();
    if ((iVar3 != 0) && (*(char *)(param_1 + 0xb5) != '\0')) {
      *(char *)(param_1 + 0xb5) = '\0';
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    }
    sub_080177F4(param_1);
  }
  else {
    sub_080B2484(3,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

