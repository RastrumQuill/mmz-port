// sub_080C5F8C at 0x080C5F8C (thumb)

undefined4 sub_080C5F8C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar2 = DAT_02004ca8 & 2;
  if ((DAT_02004ca8 & 2) == 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x9e4);
    if ((DAT_02004ca8 & 0x31) != 0) {
      if ((DAT_02004ca8 & 1) == 0) {
        if ((DAT_02004ca8 & 0x10) == 0) {
          iVar4 = uVar3 - 1;
        }
        else {
          iVar4 = uVar3 + 1;
        }
        uVar3 = sub_080C8B68(iVar4 + 3,3);
        *(char *)(param_1 + 0x9e4) = (char)uVar3;
        sub_08001EAC(0x29);
      }
      else {
        bVar1 = (byte)uVar2;
        if (0x4d < (byte)(&DAT_0202b720)[uVar3] - 1) {
          *(undefined *)(param_1 + 2) = 1;
          *(byte *)(param_1 + 3) = bVar1;
          *(ushort *)(param_1 + 4) = uVar2;
          sub_08001EAC(0x29);
          return in_lr;
        }
        (&DAT_0202b720)[uVar3] = bVar1;
        sub_08001EAC(0x28);
      }
    }
    sub_080C66E4(&DAT_0202b5a0,uVar3 & 0xff);
  }
  else {
    *(undefined *)(param_1 + 1) = 2;
    *(undefined *)(param_1 + 2) = 0;
    *(undefined *)(param_1 + 3) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return in_lr;
}

