// sub_0805222C at 0x0805222C (thumb)

undefined4 sub_0805222C(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080032EC(0x94);
    sub_080127E4(param_1,0xa602);
    *(undefined4 *)(param_1 + 0x60) = 0xfffff800;
    sub_08006E08(param_1 + 0x74,&DAT_0833c1f8);
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 1;
    *(undefined *)(param_1 + 0x12) = 0x12;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (cVar1 == '\0') {
    cVar1 = sub_08057A70(param_1);
    if (cVar1 != '\0') {
      uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar2 & 0x7fffffff;
      uVar2 = (uVar2 * 2 >> 0x11 & 1) + 2;
      if (uVar2 != 0) {
        do {
          uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
          local_28 = *(int *)(param_1 + 0x54) + ((uVar3 * 2 >> 0x11 & 0x1f) - 0x10) * 0x100;
          uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
          DAT_0202e188 = uVar3 & 0x7fffffff;
          local_24 = *(int *)(param_1 + 0xbc) + (uVar3 * 2 >> 0x11 & 0x1f) * 0x100 + -0x8800;
          sub_080B61B4(param_1,&local_28,1,0);
          uVar2 = uVar2 - 1 & 0xff;
        } while (uVar2 != 0);
      }
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

