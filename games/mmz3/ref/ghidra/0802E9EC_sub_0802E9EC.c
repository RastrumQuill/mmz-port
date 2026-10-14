// sub_0802E9EC at 0x0802E9EC (thumb)

undefined4 sub_0802E9EC(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_080177CC(param_1,0x1600,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    *(undefined *)(param_1 + 0x129) = 0xe;
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    sub_08034558(param_1,0x1600);
  }
  cVar1 = *(char *)(param_1 + 0x129) + -1;
  *(char *)(param_1 + 0x129) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xec) = 0;
    sub_080177CC(param_1,0x200,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  return in_lr;
}

