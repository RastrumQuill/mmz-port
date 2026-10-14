// sub_08070174 at 0x08070174 (thumb)

undefined4 sub_08070174(int param_1)

{
  char cVar1;
  undefined uVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar3 = *(byte *)(param_1 + 0xe);
  if (bVar3 != 1) {
    if (1 < bVar3) {
      if (bVar3 == 2) {
        *(undefined *)(param_1 + 0xe) = 3;
      }
      else if (bVar3 != 3) {
        return in_lr;
      }
      iVar4 = *(int *)(param_1 + 0x5c) + -0x200;
      *(int *)(param_1 + 0x5c) = iVar4;
      if (iVar4 <= *(int *)(param_1 + 0xb8) + -0xd800) {
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0xb8) + -0x8000;
        *(undefined *)(param_1 + 0x12) = 0x80;
        if ((*(byte *)(param_1 + 0xc5) & 1) == 0) {
          bVar3 = *(byte *)(param_1 + 0x10);
          if (bVar3 == 0) {
            *(undefined *)(param_1 + 0xd) = 1;
          }
          else {
            *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xc5) & 1;
          }
          *(undefined *)(param_1 + 0xe) = 1;
        }
        else {
          *(undefined *)(param_1 + 0xc6) = 0;
          bVar3 = *(byte *)(param_1 + 0x10);
          if (bVar3 == 0) {
            uVar2 = 6;
          }
          else {
            uVar2 = 5;
          }
          *(undefined *)(param_1 + 0xd) = uVar2;
        }
        *(byte *)(param_1 + 0x10) = bVar3 ^ 1;
      }
      sub_0806F588(param_1);
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      iVar4 = *(int *)(DAT_0202286c + 0x4c);
      *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar4;
      if (*(int *)(param_1 + 0x4c) < iVar4) {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar3;
      return in_lr;
    }
    if (bVar3 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0xc4) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0xc4) + -1;
  *(char *)(param_1 + 0xc4) = cVar1;
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0806F588(param_1);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

