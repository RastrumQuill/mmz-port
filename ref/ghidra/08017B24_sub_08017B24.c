// sub_08017B24 at 0x08017B24 (thumb)

undefined8 sub_08017B24(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  cVar2 = (&DAT_082a8125)[(uint)*(byte *)(param_1 + 0xd) * 6];
  if (cVar2 < '\0') {
    uVar3 = 1;
  }
  else {
    cVar1 = *(char *)(param_1 + 0xc2);
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 3;
    *(char *)(param_1 + 0xc2) = *(char *)(param_1 + 0xbf);
    *(char *)(param_1 + 0xbf) = cVar1;
    *(char *)(param_1 + 0xc3) = *(char *)(param_1 + 0xc0);
    *(char *)(param_1 + 0xc0) = cVar2;
    uVar4 = (uint)(byte)(&DAT_082a813c)[*(byte *)(param_1 + 0xd)];
    if (cVar1 == '\a') {
      uVar4 = uVar4 + 1;
    }
    sub_08018C20(param_1,uVar4,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
    uVar3 = 3;
  }
  return CONCAT44(in_lr,uVar3);
}

