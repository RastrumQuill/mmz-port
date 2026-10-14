// sub_080C6054 at 0x080C6054 (thumb)

undefined4 sub_080C6054(int param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  sub_08001904(0x7a,0);
  uVar4 = DAT_02004ca8 & 2;
  if ((DAT_02004ca8 & 2) == 0) {
    bVar3 = *(byte *)(param_1 + 0x9e5);
    uVar5 = (uint)bVar3;
    uVar6 = uVar5;
    if ((DAT_02004ca8 & 0xd1) != 0) {
      uVar1 = DAT_02004ca8 & 0x11;
      if ((DAT_02004ca8 & 0x11) == 0) {
        bVar3 = sub_080B492C(&DAT_0202b5a0,(int)(char)bVar3);
        uVar6 = (uint)(char)bVar3;
        if (uVar6 != uVar5) {
          *(undefined *)(param_1 + 3) = 1;
          *(ushort *)(param_1 + 4) = uVar1;
          *(byte *)(param_1 + 0x9e5) = bVar3;
          sub_08001EAC(0x29);
          sub_080C610C(param_1);
          return in_lr;
        }
      }
      else {
        cVar2 = sub_080B45B4(&DAT_0202b5a0,0,uVar5);
        if (cVar2 == '\0') {
          sub_08001EAC(0xc1);
        }
        else {
          *(undefined *)(param_1 + 2) = 2;
          *(char *)(param_1 + 3) = (char)uVar4;
          *(ushort *)(param_1 + 4) = uVar4;
        }
      }
    }
    sub_080C6720(uVar6 & 0xff);
  }
  else {
    *(undefined *)(param_1 + 2) = 0;
    *(undefined *)(param_1 + 3) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    sub_08001EAC(0x28);
  }
  return in_lr;
}

