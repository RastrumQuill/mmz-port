// sub_0804EA84 at 0x0804EA84 (thumb)

undefined4 sub_0804EA84(int param_1)

{
  undefined uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    pcVar3 = (char *)(param_1 + 0xcc);
    switch(*pcVar3) {
    case '\0':
      while( true ) {
        iVar4 = sub_08012C64(param_1);
        sub_08002D68(7,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
        *pcVar3 = *pcVar3 + '\x01';
switchD_0804eaa6_caseD_1:
        sub_08002EA0(7);
        if (*(char *)(param_1 + 0xcd) == '\0') break;
        *(char *)(param_1 + 0xce) = *(char *)(param_1 + 0xcd) + -1;
        sub_08002EF0(7);
        *pcVar3 = *pcVar3 + '\x01';
switchD_0804eaa6_caseD_2:
        uVar1 = (&DAT_0833c08b)[*(byte *)(param_1 + 0xce)];
        iVar4 = sub_08012C64(param_1);
        sub_08002D68(uVar1,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
        *pcVar3 = *pcVar3 + '\x01';
switchD_0804eaa6_caseD_3:
        sub_08002EA0((&DAT_0833c08b)[*(byte *)(param_1 + 0xce)]);
        if (*(char *)(param_1 + 0xcd) != '\0') {
          return in_lr;
        }
        sub_08002EF0((&DAT_0833c08b)[*(byte *)(param_1 + 0xce)]);
        *pcVar3 = *pcVar3 + '\x01';
switchD_0804eaa6_caseD_4:
        uVar1 = (&DAT_0833c08f)[*(byte *)(param_1 + 0xce)];
        iVar4 = sub_08012C64(param_1);
        sub_08002D68(uVar1,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
        *pcVar3 = *pcVar3 + '\x01';
switchD_0804eaa6_caseD_5:
        cVar2 = sub_08002EA0((&DAT_0833c08f)[*(byte *)(param_1 + 0xce)]);
        if (cVar2 != '\x04') {
          return in_lr;
        }
        sub_08002EF0((&DAT_0833c08f)[*(byte *)(param_1 + 0xce)]);
        *pcVar3 = '\0';
      }
      break;
    case '\x01':
      goto switchD_0804eaa6_caseD_1;
    case '\x02':
      goto switchD_0804eaa6_caseD_2;
    case '\x03':
      goto switchD_0804eaa6_caseD_3;
    case '\x04':
      goto switchD_0804eaa6_caseD_4;
    case '\x05':
      goto switchD_0804eaa6_caseD_5;
    }
  }
  return in_lr;
}

