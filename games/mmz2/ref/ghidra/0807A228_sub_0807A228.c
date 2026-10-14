// sub_0807A228 at 0x0807A228 (thumb)

undefined4 sub_0807A228(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar2 = sub_0807A694(param_1);
    if (cVar2 != '\0') {
      sub_080032EC(0xec);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_080127E4(param_1,0x3701);
    if (*(char *)(param_1 + 0x10) == '\x02') {
      sub_08012CA4(param_1,7);
    }
    *(undefined *)(param_1 + 0x12) = 0x50;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  cVar2 = sub_0807A694(param_1);
  if ((cVar2 == '\0') || (bVar1 = *(byte *)(param_1 + 0x12), bVar1 < 0x48)) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else if (((bVar1 & 3) == 0) &&
          (((bVar1 & 0xf) != 0 ||
           (uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar3 & 0x7fffffff,
           (uVar3 * 2 >> 0x11 & 3) == 0)))) {
    local_10 = *(undefined4 *)(param_1 + 0x54);
    local_c = *(undefined4 *)(param_1 + 0x58);
    sub_080B61B4(0,&local_10,1,0);
  }
  return in_lr;
}

