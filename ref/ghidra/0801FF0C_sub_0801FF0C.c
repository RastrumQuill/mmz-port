// sub_0801FF0C at 0x0801FF0C (thumb)

undefined4 sub_0801FF0C(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
  bVar2 = bVar1 & 2;
  if ((bVar1 & 2) == 0) {
    if ((byte)(*(char *)(param_1 + 0x73) - 2U) < 2) {
      if ((bVar1 & 0xc) == 0) {
        *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
        *(char *)(param_1 + 0xd) = (char)(bVar1 & 0xc);
        *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
        bVar2 = 0;
        *(ushort *)(param_1 + 0xe) = bVar1 & 0xc;
        uVar3 = *(undefined *)(param_1 + 0xbe);
      }
      else {
        *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
        *(byte *)(param_1 + 0xd) = bVar2;
        *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
        *(undefined2 *)(param_1 + 0xe) = 1;
        uVar3 = *(undefined *)(param_1 + 0xbe);
      }
      *(undefined *)(param_1 + 0xc1) = uVar3;
      *(byte *)(param_1 + 0xbe) = bVar2;
      *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xbf);
      *(byte *)(param_1 + 0xbf) = bVar2;
      *(byte *)(param_1 + 0xc3) = *(byte *)(param_1 + 0xc0);
      *(byte *)(param_1 + 0xc0) = bVar2;
    }
  }
  else {
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 2;
    sub_08018C20(param_1,0x11,1 - *(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
  }
  return in_lr;
}

