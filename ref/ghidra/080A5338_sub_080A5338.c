// sub_080A5338 at 0x080A5338 (thumb)

undefined4 sub_080A5338(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    switch(*(undefined *)(param_1 + 0x10)) {
    case 4:
      if ((DAT_02022ae3 & 1) == 0) {
        return in_lr;
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      cVar1 = '\b';
      break;
    default:
      goto switchD_080a5356_caseD_5;
    case 8:
      if ((DAT_02022ae3 & 0x14) == 0x14) {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        cVar1 = '\b';
      }
      else {
        if ((DAT_02022ae3 & 0x44) != 0x44) {
          return in_lr;
        }
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        cVar1 = '\b';
      }
      break;
    case 9:
      if ((DAT_02022ae3 & 0x48) == 0x48) {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        cVar1 = '\b';
      }
      else {
        if ((DAT_02022ae3 & 0x44) != 0x44) {
          return in_lr;
        }
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        cVar1 = '\b';
      }
      break;
    case 0xc:
      if ((DAT_02022ae3 & 0x20) == 0) {
        return in_lr;
      }
      if (((DAT_02022ae4 & 1) == 0) && ((DAT_02022ae4 & 6) == 0)) {
        return in_lr;
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      cVar1 = '\b';
      break;
    case 0xd:
      if ((DAT_02022ae3 & 0x80) == 0) {
        return in_lr;
      }
      if ((DAT_02022ae4 & 6) == 0) {
        return in_lr;
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      cVar1 = '\b';
      break;
    case 0xe:
      if ((((DAT_02022ae3 & 0x20) == 0) && ((DAT_02022ae4 & 1) == 0)) &&
         ((DAT_02022ae3 & 0x80) == 0)) {
        return in_lr;
      }
      if ((DAT_02022ae4 & 4) == 0) {
        return in_lr;
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      cVar1 = '\b';
    }
  }
  else {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b5ee0 + (uint)*(byte *)(param_1 + 0x10) * 4));
    cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  }
  *(char *)(param_1 + 0x12) = cVar1;
switchD_080a5356_caseD_5:
  return in_lr;
}

