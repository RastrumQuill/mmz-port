// sub_0802E964 at 0x0802E964 (thumb)

undefined4 sub_0802E964(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_080177CC(param_1,0x1500,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    sub_08038394(param_1,3);
    *(undefined *)(param_1 + 0x129) = 2;
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    sub_08034558(param_1,0x1500);
  }
  cVar1 = *(char *)(param_1 + 0x129) + -1;
  *(char *)(param_1 + 0x129) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xed) = 2;
    *(undefined *)(param_1 + 0xee) = 0;
    sub_0802E9EC(param_1);
  }
  return in_lr;
}

