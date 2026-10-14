// sub_0806E314 at 0x0806E314 (thumb)

undefined4 sub_0806E314(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    *(undefined *)(param_1 + 0xb7) = bVar1;
    if (bVar1) {
      sub_080127E4(param_1,0x151c);
    }
    else {
      sub_080127E4(param_1,0x151b);
    }
    sub_0809B6BC(param_1,0,*(undefined *)(param_1 + 0xb7));
    *(undefined *)(param_1 + 0x12) = 0x3c;
    sub_080032EC(0x34);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 0xf;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

