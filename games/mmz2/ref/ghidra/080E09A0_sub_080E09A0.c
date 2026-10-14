// sub_080E09A0 at 0x080E09A0 (thumb)

undefined4 sub_080E09A0(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 6) == '\0') {
    DAT_02000f90 = DAT_02000f90 & 0xf0ff | 0x100;
    pcVar1 = (char *)(param_1 + 0x235);
    sub_08002638(&DAT_08390e00 + (uint)(byte)(&DAT_0835e350)[*pcVar1 * 4] * 0x14,
                 (DAT_02000f96 & 0xc) << 0xc);
    sub_08002AEC(&DAT_08390e0c + (uint)(byte)(&DAT_0835e350)[*pcVar1 * 4] * 0x14,0);
    sub_08002824((int)(&DAT_0836d100 + (byte)(&DAT_0835e350)[*pcVar1 * 4]) +
                 (&DAT_0836d100)[(byte)(&DAT_0835e350)[*pcVar1 * 4]] + 8,
                 (DAT_02000f96 & 0x1f00) << 3,
                 ((byte)(&DAT_0835e351)[*pcVar1 * 4] & 1) * 0x300 + 0x500);
    if (((&DAT_0835e351)[*pcVar1 * 4] & 0x80) != 0) {
      sub_08002824((int)(&DAT_0836d100 + (byte)(&DAT_0835e350)[(*pcVar1 + 1) * 4]) +
                   (&DAT_0836d100)[(byte)(&DAT_0835e350)[(*pcVar1 + 1) * 4]] + 8,
                   (DAT_02000f96 & 0x1f00) * 8 + 0x800,0x400);
    }
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    return in_lr;
  }
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  *(undefined *)(param_1 + 6) = 0;
  *(undefined *)(param_1 + 7) = 0;
  return in_lr;
}

