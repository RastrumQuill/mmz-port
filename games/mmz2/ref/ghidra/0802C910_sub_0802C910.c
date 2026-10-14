// sub_0802C910 at 0x0802C910 (thumb)

undefined4 sub_0802C910(int param_1)

{
  byte bVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x17f) == '7') {
    pcVar2 = (char *)(param_1 + 0x2b8);
    if (('\0' < *pcVar2) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
      *pcVar2 = '\0';
    }
    if (((*(char *)(param_1 + 0x71) == '\x02') && (*(char *)(param_1 + 0x72) < '\x02')) &&
       ('\0' < *pcVar2)) {
      sub_0801E9FC(param_1,0x38);
      sub_08033A1C(param_1,2,0,0,10,*(undefined *)(param_1 + 0x215),0);
      *pcVar2 = '\0';
      return in_lr;
    }
  }
  else if (*(char *)(param_1 + 0x17f) != -0x79) {
    pcVar2 = (char *)(param_1 + 0x2b8);
    if ((-1 < *pcVar2) &&
       (bVar1 = sub_08036CBC(param_1,1), (*(byte *)(param_1 + 0x196) & bVar1) != 0)) {
      *pcVar2 = '\x01';
    }
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x1fc) == '\x05') && ('\0' < *pcVar2)) {
      *pcVar2 = '\0';
      return in_lr;
    }
    sub_0801EA38(param_1,0x37,2,1);
    return in_lr;
  }
  if ((byte)(*(char *)(param_1 + 0x73) - 2U) < 2) {
    sub_0803518C(param_1);
  }
  return in_lr;
}

