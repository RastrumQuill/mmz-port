// sub_08017E4C at 0x08017E4C (thumb)

undefined8 sub_08017E4C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc1) == '\x03') {
    if (*(char *)(param_1 + 0xbc) == '\0') {
      if ((*(char *)(param_1 + 0xc3) == '\x04') && (*(char *)(param_1 + 0xc2) == '\x04')) {
        *(char *)(param_1 + 0xc1) = *(char *)(param_1 + 0xbe);
        *(char *)(param_1 + 0xbe) = '\x03';
        *(char *)(param_1 + 0xc2) = *(char *)(param_1 + 0xbf);
        *(char *)(param_1 + 0xbf) = '\x04';
        *(char *)(param_1 + 0xc3) = *(char *)(param_1 + 0xc0);
        *(char *)(param_1 + 0xc0) = '\x04';
        sub_08018C20(param_1,0x6d,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
        uVar1 = 3;
        goto LAB_08017eb8;
      }
    }
    uVar1 = sub_080179F8(param_1);
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = 1;
  }
LAB_08017eb8:
  return CONCAT44(in_lr,uVar1);
}

