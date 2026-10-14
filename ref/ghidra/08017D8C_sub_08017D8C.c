// sub_08017D8C at 0x08017D8C (thumb)

undefined8 sub_08017D8C(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0xc1);
  if (*pcVar3 != '\x03') {
    uVar2 = 1;
    goto LAB_08017e28;
  }
  if (*(byte *)(param_1 + 0xbc) < 2) {
    pcVar4 = (char *)(param_1 + 0xc2);
    cVar1 = *pcVar4;
    pcVar5 = (char *)(param_1 + 0xc3);
    if (*(byte *)(param_1 + 0xbc) == 0) {
      if ((*pcVar5 != '\x04') || (cVar1 != '\x04')) goto LAB_08017e1a;
      *pcVar3 = *(char *)(param_1 + 0xbe);
      *(char *)(param_1 + 0xbe) = '\x03';
      *pcVar4 = *(char *)(param_1 + 0xbf);
      *(char *)(param_1 + 0xbf) = '\x04';
      *pcVar5 = *(char *)(param_1 + 0xc0);
      *(char *)(param_1 + 0xc0) = '\x04';
LAB_08017dd4:
      sub_08018C20(param_1,0x70,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
    }
    else {
      if (*pcVar5 != '\x04') goto LAB_08017e1a;
      *pcVar3 = *(char *)(param_1 + 0xbe);
      *(char *)(param_1 + 0xbe) = '\x03';
      *pcVar4 = *(char *)(param_1 + 0xbf);
      *(char *)(param_1 + 0xbf) = '\x04';
      *pcVar5 = *(char *)(param_1 + 0xc0);
      *(char *)(param_1 + 0xc0) = '\x04';
      if (cVar1 == '\x04') goto LAB_08017dd4;
      sub_08018BE8(param_1,0x70);
    }
    uVar2 = 3;
  }
  else {
LAB_08017e1a:
    uVar2 = sub_080179F8(param_1);
    uVar2 = uVar2 & 0xff;
  }
LAB_08017e28:
  return CONCAT44(in_lr,uVar2);
}

