// sub_080AC9FC at 0x080AC9FC (thumb)

undefined4 sub_080AC9FC(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined auStack_18 [8];
  
  sub_08128B5C(auStack_18,&DAT_081296a0,5);
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    pcVar2 = (char *)(param_1 + 0xb8);
    if (*pcVar2 == '\0') {
      if ((*(byte *)(param_1 + 0xb5) & *(byte *)(param_1 + 0xb4)) == 0) {
        *pcVar2 = '\x01';
      }
    }
    else if (*(char *)(param_1 + 0xb9) != '\0') {
      pbVar1 = (byte *)(param_1 + 0xb6);
      *(byte *)(param_1 + 0xd) = *pbVar1;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      *pcVar2 = '\0';
      *(char *)(param_1 + 0xb9) = '\0';
      *(undefined *)(param_1 + 0xb7) = auStack_18[*pbVar1];
      if (*pbVar1 == 1) {
        uVar3 = 0;
        do {
          if (((int)(uint)*(byte *)(param_1 + 0xb4) >> (uVar3 & 0xff) & 1U) == 0) {
            sub_080AC848(param_1,uVar3 & 0xff);
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 4);
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080ACFA8(param_1);
  }
  return in_lr;
}

