// sub_0802ED08 at 0x0802ED08 (thumb)

undefined4 sub_0802ED08(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_080177CC(param_1,0x2a01,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    *(undefined *)(param_1 + 0x129) = 5;
    *pcVar2 = *pcVar2 + '\x01';
  }
  *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) | 4;
  cVar1 = sub_080341A4(param_1,param_1 + 0x128);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0x129) + -1;
    *(char *)(param_1 + 0x129) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xec) = 0;
      sub_080177CC(param_1,0x200,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    }
  }
  else {
    *(undefined *)(param_1 + 0xec) = 3;
    *(undefined *)(param_1 + 0xed) = 0;
    sub_0802E618(param_1);
  }
  return in_lr;
}

