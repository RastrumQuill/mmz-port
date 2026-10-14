// sub_080C2A44 at 0x080C2A44 (thumb)

undefined4 sub_080C2A44(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x9ec);
  cVar2 = *(char *)(param_1 + 4);
  cVar1 = sub_080C2ED4(param_1,(int)cVar2);
  if (cVar1 == '\0') {
    if ((cVar2 == 0) && (cVar2 = sub_080C3024(param_1), cVar2 != '\0')) {
      uVar4 = (uint)*(byte *)(param_1 + 0x9ed);
      uVar3 = 0;
      if (uVar4 == 2) {
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    *(undefined *)(param_1 + 1) = 2;
    *(undefined *)(param_1 + 2) = 0;
    uVar3 = 0;
  }
  cVar2 = sub_080C8A9C(*(undefined4 *)(param_1 + 0x9e0 + uVar4 * 4),uVar3,
                       *(undefined4 *)(&DAT_082cbf28 + uVar4 * 4));
  *(short *)(param_1 + 4) = (short)cVar2;
  sub_080C309C(param_1,(int)(char)uVar4,0xffffffff);
  return in_lr;
}

